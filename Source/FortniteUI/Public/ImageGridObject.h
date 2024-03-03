#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ImageGridObject.generated.h"

class UFortChallengeBundleItemDefinition;
class UFortQuestItem;

UCLASS(Blueprintable)
class UImageGridObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortChallengeBundleItemDefinition* BundleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItem* QuestItem;
    
    UImageGridObject();
};

