Scriptname showFollowerCarryweightUpdateScript extends ReferenceAlias  

Function Update(Actor containerActor)
	GoToState("busy")
	If containerActor
		int totalWeight = containerActor.GetActorValue("carryweight") as int
		int weight = containerActor.GetTotalItemWeight() as int
		If weight > totalWeight
			weight = totalWeight
		EndIf
		string name = containerActor.GetDisplayName()
		string display = name + " (" + weight + "/" + totalWeight + ")"
		UI.SetString("ContainerMenu", "_root.Menu_mc.inventoryLists.tabBar.leftLabel.htmlText", display)
	EndIf
	GoToState("")
EndFunction

State busy
	Function Update(Actor containerActor)
	EndFunction
EndState
