#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AccoladeSecondaryXpType.h"
#include "EFortAccoladeSubtype.h"
#include "EFortAccoladeType.h"
#include "EXPEventPriorityType.h"
#include "FortPersistableItemDefinition.h"
#include "FortAccoladeItemDefinition.generated.h"

class UFortAccoladeItemDefinition;
class USoundCue;
class UTexture2D;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAccoladeItemDefinition : public UFortPersistableItemDefinition {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Accolades", GetFName());
    }
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAccoladeType AccoladeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAccoladeSubtype AccoladeSubtype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortAccoladeItemDefinition>> AccoladeToReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PreviouseAccoladeSmallPreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PreviouseAccoladeLargePreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EXPEventPriorityType Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat XpRewardAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccoladeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyAllowOncePerDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInAntiAddictionReducedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AwardedSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat XpRewardScalarByCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccoladeSecondaryXpType> SecondaryXpValues;
    
public:
    UFortAccoladeItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EXPEventPriorityType GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetPreviousAccoladeSmallPreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetPreviousAccoladeLargePreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetAwardedSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccoladeXpValueWithCountScalar(const int32 Count) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccoladeXpValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortAccoladeType GetAccoladeType() const;
    
    UFUNCTION(BlueprintCallable)
    EFortAccoladeSubtype GetAccoladeSubtype() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccoladeLevel() const;
    
};

