#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "SpatialFactionChoiceScreen.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialFactionChoiceScreen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
  //  UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FOnFactionChosenDynamic BP_OnFactionChosen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_FactionChoice1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_FactionChoice2;
    
public:
    USpatialFactionChoiceScreen();
};

