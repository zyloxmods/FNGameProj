#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "FortHUDElementWidget.h"
#include "AthenaCompassBase.generated.h"

class UAthenaPlayerViewModel;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCompassBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CompassMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MarkerBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HeadingIndicatorBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush StormIndicatorBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* VM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo HeadingFont;
    
public:
    UAthenaCompassBase();
    UFUNCTION(BlueprintCallable)
    void BindToModel(UAthenaPlayerViewModel* ViewModel);
    
};

