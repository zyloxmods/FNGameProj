#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFortBrushSize.h"
#include "FortMultiSizeBrush.h"
#include "Styling/SlateBrush.h"
#include "CardPackOffer.h"
#include "FortUIBlueprintFunctionLibrary.generated.h"

class UFortItem;
class UFortItemDefinition;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class UFortUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortUIBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetTimespanAsSimpleString(FTimespan Timespan);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetStandardBrushSize(TEnumAsByte<EFortBrushSize::Type> BrushSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetOrLoadSynchronously(const TSoftObjectPtr<UTexture2D>& SoftTexture2D);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMetaStringOnOffer(const FCardPackOffer& Offer, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMetaIntOnOffer(const FCardPackOffer& Offer, const FString& Key, int32 DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMetaBoolOnOffer(const FCardPackOffer& Offer, const FString& Key, bool bDefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortMultiSizeBrush GetItemSmallPreviewImageMultiSizeBrush(const UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush GetItemSmallPreviewImageBrush(const UFortItem* Item, TEnumAsByte<EFortBrushSize::Type> BrushSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortMultiSizeBrush GetItemDefinitionSmallPreviewImageMultiSizeBrush(const UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush GetItemDefinitionSmallPreviewImageBrush(const UFortItemDefinition* ItemDefinition, TEnumAsByte<EFortBrushSize::Type> BrushSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetAssetFromTemplateId(const FString& TemplateId);
    
};

