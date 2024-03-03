#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "CommonDialogueBankParticipant.h"
#include "ConversationEntryList.h"
#include "ConversationDatabase.generated.h"

class UConversationNode;

UCLASS(Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationDatabase : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FConversationEntryList> EntryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UConversationNode*> ReachableNodeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonDialogueBankParticipant> Speakers;
    
public:
    UConversationDatabase();
};

