#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactionData.h"
#include "FactionHostileRelation.h"
#include "FactionInfo.generated.h"

class AFortPawn;

USTRUCT(BlueprintType)
struct FFactionInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFactionData FactionData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FactionRelations[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPawn*> Pawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFactionHostileRelation> HostileRelations;
    
public:
    FORTNITEGAME_API FFactionInfo();
};

