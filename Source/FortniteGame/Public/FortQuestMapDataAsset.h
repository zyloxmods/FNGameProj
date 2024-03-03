#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortQuestMapDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UFortQuestMapDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CosmeticData;
    
    UFortQuestMapDataAsset();
};

