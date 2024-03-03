#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ConversationEntryList.h"
#include "ConversationRegistry.generated.h"

class UConversationDatabase;
class UConversationNode;

UCLASS(Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationRegistry : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UConversationDatabase*> HackBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FConversationEntryList> EntryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UConversationNode*> ReachableNodeMap;
    
public:
    UConversationRegistry();
};

