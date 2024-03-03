#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortQuestMapEventQuestSideBarData.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FFortQuestMapEventQuestSideBarData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EventFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAlways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CycleTime;
    
    FORTNITEUI_API FFortQuestMapEventQuestSideBarData();
};

