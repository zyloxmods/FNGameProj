#pragma once
#include "CoreMinimal.h"
#include "Components/RadialBoxSettings.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "FortRadialMenu.generated.h"

class UDynamicEntryBox;

UCLASS(Blueprintable, EditInlineNew)
class UFortRadialMenu : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JoystickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseDeadZoneRadiusPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadialBoxSettings RadialBoxSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_ContextRadial;
    
public:
    UFortRadialMenu();
};

