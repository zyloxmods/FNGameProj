#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "CreativeOptionCategoryData.h"
#include "CreativeOptionData.h"
#include "OnCreativeOptionChangedDelegate.h"
#include "UFortMatchmakingKnobsDataSource.h"
#include "FortCreativeOption.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCreativeOption : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DisplayIcon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeOptionChanged OnCreativeOptionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeOptionData> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<UFortMatchmakingKnobsDataSource::Type> MenuListType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
public:
    UFortCreativeOption();
    UFUNCTION(BlueprintCallable)
    void SetCurrentIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void IncrementIndexWithWrap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValueAtIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValueAtCurrentIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCreativeOptionTextAtIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCreativeOptionTextAtCurrent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesMatchCategory(FCreativeOptionCategoryData& CreativeOptionCategory);
    
    UFUNCTION(BlueprintCallable)
    void DecrementIndexWithWrap();
    
};

