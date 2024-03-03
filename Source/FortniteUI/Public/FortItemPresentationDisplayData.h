#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortItemPresentationDisplayData.generated.h"

class UAthenaGiftReceivedPrompt;
class UFortItemNotification;
class UFortItemPresentationScreen;
class UObject;

UCLASS(Blueprintable)
class UFortItemPresentationDisplayData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> HeaderOverrideStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> BodyOverrideStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> ViolatorOverrideStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> SubheaderOverrideStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> BattlePassUnownedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> BattlePassOwnedIcon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortItemPresentationScreen> ItemPresentationScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaGiftReceivedPrompt> GiftReceivedPromptClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortItemNotification> ItemNotificationPromptClass;
    
public:
    UFortItemPresentationDisplayData();
};

