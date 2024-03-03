#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortWinterQuestLobbyHeader.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestLobbyHeader : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Purchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Gift;
    
public:
    UFortWinterQuestLobbyHeader();
};

