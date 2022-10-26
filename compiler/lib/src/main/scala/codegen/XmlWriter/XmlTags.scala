package fpp.compiler.codegen

/** Utilities for constructing XML Tags */
object XmlTags extends LineUtils {

  def closeTag(name: String): String = s"</$name>"

  def openCloseTag(name: String, pairs: List[(String, String)] = Nil): String = openTagPrefix(name, pairs) ++ "/>"

  def openTag(name: String, pairs: List[(String, String)] = Nil): String = openTagPrefix(name, pairs) ++ ">"

  def quoted(s: String): String = {
    // Remove leading and trailing quotation marks from the input string
    val s1 = s.replaceAll("^\"", "").replaceAll("\"$", "")
    // Escape any remaining quotation marks in the XML way
    val s2 = s1.replaceAll("\"", "&quot;")
    // Add leading and trailing quotation marks for the XML tag
    "\"" ++ s2 ++ "\""
  }

  def taggedLines (tags: (String, String)) (ls: List[Line]): List[Line] = {
    val (openTag, closeTag) = tags
    (line(openTag) :: ls) :+ line(closeTag)
  }

  def taggedLines (name: String, pairs: List[(String, String)] = Nil) (ls: List[Line]): List[Line] = 
    ls match {
      case Nil => lines(openCloseTag(name, pairs))
      case _ => taggedLines (tags(name, pairs)) (ls)
    }

  def taggedLinesOpt (name: String, pairs: List[(String, String)] = Nil) (ls: List[Line]): List[Line] = 
    ls match {
      case Nil => Nil
      case ls1 => taggedLines (name, pairs) (ls1)
    }

  def taggedString (tags: (String, String)) (s: String): String = {
    val (openTag, closeTag) = tags
    openTag ++ s ++ closeTag
  }

  def tags(name: String, pairs: List[(String, String)] = Nil): (String, String) = (openTag(name, pairs), closeTag(name))

  private def openTagPrefix(name: String, pairs: List[(String, String)]) = 
    pairs.foldLeft(s"<$name")({ case (s, key -> value) => s ++ s" $key=${quoted(value)}" })

}
