#include "FortUIBlueprintFunctionLibrary.h"

FText UFortUIBlueprintFunctionLibrary::GetTimespanAsSimpleString(FTimespan Timespan) {
    return FText::GetEmpty();
}

FVector2D UFortUIBlueprintFunctionLibrary::GetStandardBrushSize(TEnumAsByte<EFortBrushSize::Type> BrushSize) {
    return FVector2D{};
}

UTexture2D* UFortUIBlueprintFunctionLibrary::GetOrLoadSynchronously(const TSoftObjectPtr<UTexture2D>& SoftTexture2D) {
    return NULL;
}

FString UFortUIBlueprintFunctionLibrary::GetMetaStringOnOffer(const FCardPackOffer& Offer, const FString& Key) {
    return TEXT("");
}

int32 UFortUIBlueprintFunctionLibrary::GetMetaIntOnOffer(const FCardPackOffer& Offer, const FString& Key, int32 DefaultValue) {
    return 0;
}

bool UFortUIBlueprintFunctionLibrary::GetMetaBoolOnOffer(const FCardPackOffer& Offer, const FString& Key, bool bDefaultValue) {
    return false;
}

FFortMultiSizeBrush UFortUIBlueprintFunctionLibrary::GetItemSmallPreviewImageMultiSizeBrush(const UFortItem* Item) {
    return FFortMultiSizeBrush{};
}

FSlateBrush UFortUIBlueprintFunctionLibrary::GetItemSmallPreviewImageBrush(const UFortItem* Item, TEnumAsByte<EFortBrushSize::Type> BrushSize) {
    return FSlateBrush{};
}

FFortMultiSizeBrush UFortUIBlueprintFunctionLibrary::GetItemDefinitionSmallPreviewImageMultiSizeBrush(const UFortItemDefinition* ItemDefinition) {
    return FFortMultiSizeBrush{};
}

FSlateBrush UFortUIBlueprintFunctionLibrary::GetItemDefinitionSmallPreviewImageBrush(const UFortItemDefinition* ItemDefinition, TEnumAsByte<EFortBrushSize::Type> BrushSize) {
    return FSlateBrush{};
}

UObject* UFortUIBlueprintFunctionLibrary::GetAssetFromTemplateId(const FString& TemplateId) {
    return NULL;
}

UFortUIBlueprintFunctionLibrary::UFortUIBlueprintFunctionLibrary() {
}

