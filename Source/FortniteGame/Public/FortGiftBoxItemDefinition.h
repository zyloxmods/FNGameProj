#pragma once
#include "CoreMinimal.h"
#include "EFortGiftWrapType.h"
#include "ESubGame.h"
#include "FortAccountItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "FortGiftBoxItemDefinition.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable, MinimalAPI)
class UFortGiftBoxItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubGame RestrictToSubgame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGiftWrapType GiftWrapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ViolatorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultHeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubHeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultBodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ItemDisplayAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReuseExistingBoxIfPossible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> GiftBoxPreMessageWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> GiftBoxHeaderSubWidgetRef;
    
    UFortGiftBoxItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool TryLoadPreMessageWidgetClass(TSubclassOf<UUserWidget>& OutWidgetClass);
    
    UFUNCTION(BlueprintCallable)
    bool TryLoadHeaderSubWidgetClass(TSubclassOf<UUserWidget>& OutWidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPreMessageWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeaderSubWidget() const;
    
};

