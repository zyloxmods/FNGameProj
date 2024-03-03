#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "GameplayTagContainer.h"
#include "FortConversationPawn.generated.h"

UCLASS(Blueprintable)
class AFortConversationPawn : public ABuildingProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConversationEntryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractorParticipantTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SelfParticipantTag;
    
public:
    AFortConversationPawn();
};

