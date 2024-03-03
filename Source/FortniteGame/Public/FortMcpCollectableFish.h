#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortCollectedState.h"
#include "FortMcpCollectedFishProperties.h"
#include "FortMcpCollectionBase.h"
#include "FortMcpCollectableFish.generated.h"

class AFortPlayerController;
class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpCollectableFish : public UFortMcpCollectionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UFortItemDefinition*> SpeciesToItemDefMap;
    
public:
    UFortMcpCollectableFish();
    UFUNCTION(BlueprintCallable)
    static EFortCollectedState AddToPlayerCollection(const AFortPlayerController* FPC, const FGameplayTag& Variant, const FFortMcpCollectedFishProperties& Props, const FGameplayTagContainer& ContextTags);
    
};

