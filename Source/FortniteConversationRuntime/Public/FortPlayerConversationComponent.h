#pragma once
#include "CoreMinimal.h"
#include "FortConversationParticipantComponent.h"
#include "FortPlayerConversationComponent.generated.h"

class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPlayerConversationComponent : public UFortConversationParticipantComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DialogWidgetSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DialogWidgetInstance;
    
public:
    UFortPlayerConversationComponent();
};

