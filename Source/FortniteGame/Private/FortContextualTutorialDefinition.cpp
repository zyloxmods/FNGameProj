#include "FortContextualTutorialDefinition.h"

UFortContextualTutorialDefinition::UFortContextualTutorialDefinition() {
    this->ContextualTutorialClass = NULL;
    this->TutorialType = EFortContextualTutorialTypes::AllSeen;
    this->Priority = 0;
    this->AmountOfRecallMatches = 0;
    this->TriggerActivationDelay = 1;
    this->MessageDisplayTime = 1;
    this->SuccesMessageDisplayTime = 1;
    this->ReminderDelay = 1;
    this->ReminderAmount = 0;
    this->InformativeMessageDelay = 1;
    this->LockedDelay = 1;
    this->AccountLevelLimit = 0;
    this->bCanBeShownInCombat = false;
    this->bIsCompletionSilent = false;
    this->bAlwaysSendSuccess = false;
    this->bCanSetMessagingSystemOnCooldown = true;
    this->bCanBeShownWhileDBNO = false;
    this->Platform = EFortContextualTutorialPlatform::Any;
    this->ContextualTutorialDependency = EFortContextualTutorialTypes::AllSeen;
    this->bRequireSquad = false;
    this->bRequireSolo = false;
    this->bActivateInBR = true;
    this->bActivateInCreative = false;
    this->bIsEnabled = true;
}

