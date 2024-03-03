#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "AthenaChatModalWrapper.generated.h"

class UFortChatContainer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChatModalWrapper : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortChatContainer* ChatContainer_Chat;
    
    UAthenaChatModalWrapper();
};

