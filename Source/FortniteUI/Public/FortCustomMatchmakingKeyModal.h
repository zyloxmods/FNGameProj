#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCustomMatchmakingKeyModal.generated.h"

class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCustomMatchmakingKeyModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_MatchmakingKey;
    
public:
    UFortCustomMatchmakingKeyModal();
};

