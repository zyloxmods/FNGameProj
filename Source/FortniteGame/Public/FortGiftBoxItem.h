#pragma once
#include "CoreMinimal.h"
#include "GiftBoxInfo.h"
#include "ESubGame.h"
#include "FortAccountItem.h"
#include "OnTextFilteredDelegate.h"
#include "FortGiftBoxItem.generated.h"

class UFortGiftBoxItemDefinition;
class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGiftBoxItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGiftBoxInfo GiftBoxInfo;
    
    UFortGiftBoxItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetParamText(const FString& ParamName, FText& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetParamString(const FString& ParamName, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetParamInt(const FString& ParamName, int32& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemDefinition* RetrieveItemDefintionFromParam(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleIn(const ESubGame SubGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasParam(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAccountID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortGiftBoxItemDefinition* GetGiftBoxDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText FormatTextUsingParams(const FText& FormatString) const;
    
    UFUNCTION(BlueprintCallable)
    void FilterUserMessageForProfanity(int32 ControllerId, FOnTextFiltered OnTextFiltered);
    
};

