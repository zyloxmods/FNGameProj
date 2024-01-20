#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "FortTooltipValueData.h"
#include "FortTooltip.generated.h"

class UFortTooltipContext;

UCLASS(Blueprintable, Within=FortTooltipManager)
class FORTNITEGAME_API UFortTooltip : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
public:
    UFortTooltip();
    UFUNCTION(BlueprintCallable)
    void SetLocalizationText(const FString& Name, FText Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalizationInt(const FString& Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalizationFloat(const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueData(const UObject* ObjectToDescribe, const UFortTooltipContext* Context, const FGameplayTag& Token, FFortTooltipValueData& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTokenizedDescriptionText(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, TArray<FText>& OutDescription) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTextForToken(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, FText& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNumericValue(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, float& OutVal) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_GetValueData(const UObject* ObjectToDescribe, const UFortTooltipContext* Context, const FGameplayTag& Token, FFortTooltipValueData& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_GetTokenizedDescriptionText(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, TArray<FText>& OutDescription) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_GetTextForToken(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, FText& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_GetNumericValue(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, float& OutVal) const;
    
};

