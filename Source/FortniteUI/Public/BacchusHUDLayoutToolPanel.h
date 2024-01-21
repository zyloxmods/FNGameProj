#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "UObject/NoExportTypes.h"
#include "BackgroundColors.h"
#include "BacchusHUDLayoutToolPanel.generated.h"

class UHUDLayoutToolButtonLayer;
class UHUDLayoutToolPanZoomWidget;
class UImage;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UBacchusHUDLayoutToolPanel : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolButtonLayer* ButtonLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolPanZoomWidget* ZoomWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackgroundColors CombatColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackgroundColors BuildColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OpenPanelOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BackgroundMID;
    
public:
    UBacchusHUDLayoutToolPanel();
};

