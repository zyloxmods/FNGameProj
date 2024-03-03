#pragma once
#include "CoreMinimal.h"
#include "ConversationParticipantComponent.h"
#include "FortConversationParticipantComponent.generated.h"

class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortConversationParticipantComponent : public UConversationParticipantComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* ConversationInputComp;
    
public:
    UFortConversationParticipantComponent();
};

