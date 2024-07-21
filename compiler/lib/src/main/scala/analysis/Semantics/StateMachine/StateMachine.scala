package fpp.compiler.analysis

import fpp.compiler.ast._
import fpp.compiler.util._

/** An FPP state machine */
case class StateMachine(
  /** The AST node defining the state machine */
  aNode: Ast.Annotated[AstNode[Ast.DefStateMachine]]
) {

  /** Complete a state machine definition */
  def complete: Result.Result[StateMachine] = 
    Right(this.copy())

}