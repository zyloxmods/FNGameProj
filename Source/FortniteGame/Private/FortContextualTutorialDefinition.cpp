#include "FortContextualTutorialDefinition.h"

UFortContextualTutorialDefinition::UFortContextualTutorialDefinition() {
    ContextualTutorialClass = NULL;
    TutorialType = EFortContextualTutorialTypes::AllSeen;
    Priority = 0;
    AmountOfRecallMatches = 0;
    TriggerActivationDelay = 1;
    MessageDisplayTime = 1;
    SuccesMessageDisplayTime = 1;
    ReminderDelay = 1;
    ReminderAmount = 0;
    InformativeMessageDelay = 1;
    LockedDelay = 1;
    AccountLevelLimit = 0;
    bCanBeShownInCombat = false;
    bIsCompletionSilent = false;
    bAlwaysSendSuccess = false;
    bCanSetMessagingSystemOnCooldown = true;
    bCanBeShownWhileDBNO = false;
    Platform = EFortContextualTutorialPlatform::Any;
    ContextualTutorialDependency = EFortContextualTutorialTypes::AllSeen;
    bRequireSquad = false;
    bRequireSolo = false;
    bActivateInBR = true;
    bActivateInCreative = false;
    bIsEnabled = true;
}

