#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnalyticsEventAttr.h"
#include "AnalyticsBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnalyticsBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool StartSessionWithAttributes(const TArray<FAnalyticsEventAttr>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSession();
    
    UFUNCTION(BlueprintCallable)
    static void SetUserId(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static void SetSessionId(const FString& SessionId);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocation(const FString& Location);
    
    UFUNCTION(BlueprintCallable)
    static void SetGender(const FString& Gender);
    
    UFUNCTION(BlueprintCallable)
    static void SetBuildInfo(const FString& BuildInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SetAge(int32 Age);
    
    UFUNCTION(BlueprintCallable)
    static void RecordSimpleItemPurchaseWithAttributes(const FString& ItemId, int32 ItemQuantity, const TArray<FAnalyticsEventAttr>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static void RecordSimpleItemPurchase(const FString& ItemId, int32 ItemQuantity);
    
    UFUNCTION(BlueprintCallable)
    static void RecordSimpleCurrencyPurchaseWithAttributes(const FString& GameCurrencyType, int32 GameCurrencyAmount, const TArray<FAnalyticsEventAttr>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static void RecordSimpleCurrencyPurchase(const FString& GameCurrencyType, int32 GameCurrencyAmount);
    
    UFUNCTION(BlueprintCallable)
    static void RecordProgressWithFullHierarchyAndAttributes(const FString& ProgressType, const TArray<FString>& ProgressNames, const TArray<FAnalyticsEventAttr>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static void RecordProgressWithAttributes(const FString& ProgressType, const FString& ProgressName, const TArray<FAnalyticsEventAttr>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static void RecordProgress(const FString& ProgressType, const FString& ProgressName);
    
    UFUNCTION(BlueprintCallable)
    static void RecordItemPurchase(const FString& ItemId, const FString& Currency, int32 PerItemCost, int32 ItemQuantity);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEventWithAttributes(const FString& EventName, const TArray<FAnalyticsEventAttr>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEventWithAttribute(const FString& EventName, const FString& AttributeName, const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent(const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    static void RecordErrorWithAttributes(const FString& Error, const TArray<FAnalyticsEventAttr>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static void RecordError(const FString& Error);
    
    UFUNCTION(BlueprintCallable)
    static void RecordCurrencyPurchase(const FString& GameCurrencyType, int32 GameCurrencyAmount, const FString& RealCurrencyType, float RealMoneyCost, const FString& PaymentProvider);
    
    UFUNCTION(BlueprintCallable)
    static void RecordCurrencyGivenWithAttributes(const FString& GameCurrencyType, int32 GameCurrencyAmount, const TArray<FAnalyticsEventAttr>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static void RecordCurrencyGiven(const FString& GameCurrencyType, int32 GameCurrencyAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAnalyticsEventAttr MakeEventAttribute(const FString& AttributeName, const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSessionId();
    
    UFUNCTION(BlueprintCallable)
    static void FlushEvents();
    
    UFUNCTION(BlueprintCallable)
    static void EndSession();
    
};

