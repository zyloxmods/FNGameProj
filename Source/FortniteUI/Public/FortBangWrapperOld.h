#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortBangType.h"
#include "Components/ContentWidget.h"
#include "EFortBangSize.h"
#include "EFortTutorialGlowType.h"
#include "FortBangInterface.h"
#include "FortBangWrapperOld.generated.h"

UCLASS(Blueprintable)
class UFortBangWrapperOld : public UContentWidget, public IFortBangInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBangSize Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBangType BangType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortTutorialGlowType TutorialGlowType;
    
    UFortBangWrapperOld();
    UFUNCTION(BlueprintCallable)
    void SetBangVisibility(bool InVisible);
    
    
    // Fix for true pure virtual functions not being implemented
};

