#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "FortGridWidgetBase.h"
#include "FortGridPickerButton.generated.h"

class UFortGridPickerGrid;

UCLASS(Blueprintable)
class UFortGridPickerButton : public UFortGridWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsGridPickerOpenChanged, bool, IsOpen);
    DECLARE_DYNAMIC_DELEGATE_RetVal(UFortGridPickerGrid*, FCreateGridWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMenuPlacement> GridPlacement;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGridPickerGrid* GridWidget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseOnTileClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateGridWidget GridWidgetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsGridPickerOpenChanged OnGridPickerOpenChanged;
    
    UFortGridPickerButton();
    UFUNCTION(BlueprintCallable)
    void SetIsOpen(const bool ShouldBeOpen);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

