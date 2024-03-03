#pragma once
#include "CoreMinimal.h"
#include "QuestRecapData.generated.h"

class UFortQuestItem;

USTRUCT(BlueprintType)
struct FQuestRecapData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortQuestItem> QuestItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastKnownMcpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AchivedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredCount;
    
    FORTNITEUI_API FQuestRecapData();
};

