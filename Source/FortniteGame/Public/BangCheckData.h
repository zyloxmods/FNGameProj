#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BangCheckData.generated.h"

class UFortChallengeBundleItemDefinition;
class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FBangCheckData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* AlterQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* EgoQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortChallengeBundleItemDefinition* BundleSeeRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IntroTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoomBangTag;
    
    FORTNITEGAME_API FBangCheckData();
};

