#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortQuestObjectiveStatEvent.h"
#include "FortChallengeMapPoiData.h"
#include "FortQuestIndicatorData.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class UFortQuestIndicatorData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestTagToLocationDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DefaultQuestIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestTagToIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortQuestObjectiveStatEvent, TSoftObjectPtr<UTexture2D>> QuestOjectiveTypeToIconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestTagToCategoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeMapPoiData> ChallengeMapPoiData;
    
public:
    UFortQuestIndicatorData();
};

