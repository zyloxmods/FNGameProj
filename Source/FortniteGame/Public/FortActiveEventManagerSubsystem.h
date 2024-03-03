#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnActiveEventHotfixesAppliedDelegate.h"
#include "FortActiveEventManagerSubsystem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortActiveEventManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveEventHotfixesApplied OnActiveEventHotfixesApplied;
    
public:
    UFortActiveEventManagerSubsystem();
};

