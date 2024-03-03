#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticLockerSlotData.h"
#include "FortProfileItem.h"
#include "FortCosmeticLockerItem.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UFortCosmeticLockerItem : public UFortProfileItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locker_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString banner_icon_template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString banner_color_template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 use_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCosmeticLockerSlotData locker_slots_data;
    
public:
    UFortCosmeticLockerItem();
    UFUNCTION(BlueprintCallable)
    static bool IsValidLockerName(UWorld* ContextWorld, const FString& Candidate);
    
};

