#pragma once
#include "CoreMinimal.h"
#include "EFortLoginInteraction.generated.h"

UENUM(BlueprintType)
enum class EFortLoginInteraction : uint8 {
    Begin,
    PlayedBefore,
    CredentialSelect,
    NamePassword,
    RedirectEpicAccount,
    AccountNotFound,
    CreateDisplayName,
    MultiFactorAuth,
    EULA,
    AccountLink,
    AccountPinLink,
    WebLogin,
    WebAccountCreation,
    AgeGate,
};

