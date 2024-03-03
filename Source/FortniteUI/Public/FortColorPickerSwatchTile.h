#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "UObject/NoExportTypes.h"
#include "FortColorPickerSwatchTile.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortColorPickerSwatchTile : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImageColorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SwatchColor;
    
public:
    UFortColorPickerSwatchTile();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwatchLockedStateChanged(bool bLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwatchColorSet(bool bInNullColor);
    
};

