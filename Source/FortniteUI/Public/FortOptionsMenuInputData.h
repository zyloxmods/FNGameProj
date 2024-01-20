#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortInputActionGroup.h"
#include "FortActionKeyMapping.h"
#include "FortOptionsMenuInputData.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable)
class UFortOptionsMenuInputData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PrimaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SecondaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TabText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortActionKeyMapping ActionKeyMapping;
    
    UFortOptionsMenuInputData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortInputActionGroup GetInputActionGroup() const;
    
};

