#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivatablePanel.h"
#include "FortStandaloneModalPopup.generated.h"

class UCommonBorder;
class UCommonButton;
class UFortStoreFrontOfferWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStandaloneModalPopup : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle buttonInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_TapToCloseZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferWidgetBase* ItemShopStandaloneOfferPreview;
    
public:
    UFortStandaloneModalPopup();
private:
    UFUNCTION(BlueprintCallable)
    void HandleInputActionButton(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleDetailsButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    
};

