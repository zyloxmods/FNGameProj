#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortEventQuestMapDataEntry.h"
#include "FortQuestMapDataEntry.h"
#include "FortQuestMapData.generated.h"

UCLASS(Blueprintable)
class UFortQuestMapData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortQuestMapDataEntry CampaignQuestMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortEventQuestMapDataEntry> EventQuestMapList;
    
    UFortQuestMapData();
};

