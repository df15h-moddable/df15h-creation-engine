Scriptname showFollowerCarryweightScript extends ReferenceAlias

Event OnPlayerLoadGame()
	SetUp()
EndEvent

Event OnInit()
	SetUp()
EndEvent

Function SetUp()
	RegisterForMenu("ContainerMenu")
EndFunction

Event OnMenuOpen(String MenuName)
	Actor containerActor = GetContainerActor()
	If containerActor && containerActor.IsPlayerTeammate()
		GoToState("Active")
		updateScript.Update(containerActor)
	EndIf
EndEvent

Actor Function GetContainerActor()
	Form[] menuForms = RogueUI.GetAssociatedMenuForm("ContainerMenu")
	If menuForms && menuForms.Length == 1
		Return menuForms[0] as Actor
	EndIf
EndFunction

Event OnMenuClose(String MenuName)
	GoToState("")
EndEvent

State Active
	Event OnItemAdded(Form akBaseItem, int aiItemCount, ObjectReference akItemReference, ObjectReference akSourceContainer)
		updateScript.Update(GetContainerActor())
	EndEvent

	Event OnItemRemoved(Form akBaseItem, int aiItemCount, ObjectReference akItemReference, ObjectReference akDestContainer)
		updateScript.Update(GetContainerActor())
	EndEvent
EndState

showFollowerCarryweightUpdateScript Property updateScript Auto
