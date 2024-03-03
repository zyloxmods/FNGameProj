#pragma once
#include "CoreMinimal.h"
#include "ConversationParticipantComponent.h"
#include "GameplayTagContainer.h"
#include "FortNPCConversationParticipantComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortNPCConversationParticipantComponent : public UConversationParticipantComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConversationEntryTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractorParticipantTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SelfParticipantTag;
    
public:
    UFortNPCConversationParticipantComponent();
};

