#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortFuelGadgetVisualType.h"
#include "AthenaGadgetFuelWidget.generated.h"

class UAthenaGadgetItemDefinition;
class UCommonNumericTextBlock;
class UFortWorldItem;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaGadgetFuelWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAthenaGadgetItemDefinition> AthenaGadgetItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortFuelGadgetVisualType FortFuelGadgetVisualType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FuelGaugeProgressImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* CurrentChargesText;
    
public:
    UAthenaGadgetFuelWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetItem(UFortWorldItem* Item);
    
};

