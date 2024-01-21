#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "OnVariantChangedEventDelegate.h"
#include "FortVariantPicker.generated.h"

class UAthenaCosmeticAccountItem;
class UAthenaCosmeticItemDefinition;
class UFortVariantEntryBox;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UFortVariantPicker : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVariantChangedEvent OnVariantChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Variants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantEntryBox* EntryBox_VariantOptions;
    
public:
    UFortVariantPicker();
    UFUNCTION(BlueprintCallable)
    void InitFromCosmeticItemDef(UAthenaCosmeticItemDefinition* InCosmeticItemDef);
    
    UFUNCTION(BlueprintCallable)
    void InitFromCosmeticItem(UAthenaCosmeticAccountItem* InCosmeticItem);
    
};

