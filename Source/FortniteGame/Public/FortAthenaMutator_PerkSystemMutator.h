#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "PerkMutatorData.h"
#include "FortAthenaMutator_PerkSystemMutator.generated.h"

class AFortPlayerControllerAthena;
class UFortSpyTechItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_PerkSystemMutator : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPerksToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPerksToUnlock;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkMutatorData MutatorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxTimeAtPerkScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxTimeToBlockRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayedPerkSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSpyTechItemDefinition*> DefaultPerks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AFortPlayerControllerAthena>, FTimerHandle> SafetyTimerMap;
    
public:
    AFortAthenaMutator_PerkSystemMutator();
};

