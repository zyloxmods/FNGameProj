#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortQuestMapData.generated.h"

class UFortEventQuestMapDataAsset;
class UFortQuestMapDataAsset;

UCLASS(Blueprintable)
class UFortQuestMapData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestMapDataAsset* CampaignQuestMapDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortEventQuestMapDataAsset*> EventQuestMapDataAssetList;
    
    UFortQuestMapData();
};

