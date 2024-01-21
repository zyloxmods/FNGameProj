#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortMessageReceivedScreen.generated.h"

class UFortGiftBoxItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMessageReceivedScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FOnFinalGiftingComplete OnMessageClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* GiftBoxItem;
    
    UFortMessageReceivedScreen();
};

