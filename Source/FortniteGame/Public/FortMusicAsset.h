#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortMusicSectionStopBehavior.h"
#include "EFortMusicSectionType.h"
#include "FortMusicSection.h"
#include "FortMusicAsset.generated.h"

UCLASS(Blueprintable)
class UFortMusicAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMusicSection Sections[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMusicSectionStopBehavior StopBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStinger;
    
    UFortMusicAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortMusicSection GetMusicSection(TEnumAsByte<EFortMusicSectionType::Type> Section);
    
};

