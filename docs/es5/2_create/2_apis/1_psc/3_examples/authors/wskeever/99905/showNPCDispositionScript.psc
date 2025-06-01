Scriptname showNPCDispositionScript extends ReferenceAlias  

Event OnPlayerLoadGame()
	SetUp()
EndEvent

Event OnInit()
	SetUp()
EndEvent

Function SetUp()
	RegisterForMenu("Dialogue Menu")
EndFunction

Event OnMenuOpen(String MenuName)
	Actor dialogActor = GetDialogActor()
	If dialogActor
		Int disposition = dialogActor.GetRelationshipRank(playerRef)
		String dispositionString = dispositionStrings[disposition + 4]
		If dispositionString && dispositionString != ""
			String displayString = dialogActor.GetDisplayName() + dispositionString
			UI.SetString(MenuName, "_root.DialogueMenu_mc.SpeakerName.textAutoSize", "shrink")
			UI.InvokeString(MenuName, "_root.DialogueMenu_mc.SetSpeakerName", displayString)
		EndIf
	EndIf
EndEvent

Actor Function GetDialogActor()
	Form[] menuForms = RogueUI.GetAssociatedMenuForm("Dialogue Menu")
	If menuForms && menuForms.Length >= 1
		Return menuForms[0] as Actor
	EndIf
EndFunction

String[] Property dispositionStrings Auto
Actor Property playerRef Auto
