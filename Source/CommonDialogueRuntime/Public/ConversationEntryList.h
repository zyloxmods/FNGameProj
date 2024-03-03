#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConversationEntryList.generated.h"

USTRUCT(BlueprintType)
struct FConversationEntryList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> DestinationList;
    
    COMMONDIALOGUERUNTIME_API FConversationEntryList();
};

