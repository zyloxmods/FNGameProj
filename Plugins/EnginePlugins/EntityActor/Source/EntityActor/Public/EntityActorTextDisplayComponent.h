#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/TextRenderComponent.h"
#include "Components/TextRenderComponent.h"
#include "EntityComponent.h"
#include "EntityActorTextDisplayComponent.generated.h"

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorTextDisplayComponent : public UEntityComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
public:
    UEntityActorTextDisplayComponent();
    UFUNCTION(BlueprintCallable)
    void SetWorldSize(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextRenderColor(FColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void SetRelativeScale(FVector RelativeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetRelativeRotation(FRotator RelativeRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetRelativeLocation(FVector RelativeLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);
    
    UFUNCTION(BlueprintCallable)
    float GetWorldSize() const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EVerticalTextAligment> GetVerticalAlignment();
    
    UFUNCTION(BlueprintCallable)
    FColor GetTextRenderColor() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetRelativeLocation();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EHorizTextAligment> GetHorizontalAlignment();
    
};

